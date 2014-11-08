# coding: UTF-8

require_relative './camel.rb'

def font_size(rank, max)
  rate = rank.to_f / max

  if rate > 6.to_f / 7
    return 7
  elsif rate > 5.to_f / 7
    return 6
  elsif rate > 4.to_f / 7
    return 4
  elsif rate > 3.to_f / 7
    return 3
  elsif rate > 2.to_f / 7
    return 2
  else
    return 1
  end
end

def font_color(size)
  return "#2E2EFE" if size == 1
  return "#2ECCFA" if size == 2
  return "#2EFEC8" if size == 3
  return "#81F801" if size == 4
  return "#FED12E" if size == 5
  return "#FE9A2E" if size == 6
  return "#FE2E2E" if size == 7
end

keyword_cloud = Hash.new(0)

loop do
  input = gets.chomp
  break if input == '.'
  keyword_cloud[input] += 1
end

ranks = keyword_cloud.values.uniq.sort   # フォントサイズ計算用
p ranks

keyword_cloud.to_a.sort_by!{|k, v| v}

#---------- Camelize ----------

# 元の配列を bump_count 個のコブに分割する
bumps = Array.new
7.times do |i|
  bumps[i] = Array.new
end
keyword_cloud.each.with_index {|e, i|
  bumps[i % 7].push(e)
}

# それぞれのコブの中で小さい方から順番に左右交互に積んでいく
bumps = bumps.map do |bump|
  tmp = Array.new
  tmp = bump.select.with_index {|e, i| i % 2 == 0}
  bump.reject!.with_index {|e, i| i % 2 == 0}
  bump += tmp.reverse
end

# コブを合成して返す
keyword_cloud = bumps.inject(Array.new) {|result, e| result + e}

#------------------------------

keyword_cloud.each {|k, v|
  next if v == 1
  size  = font_size(ranks.index(v), ranks.length)
  color = font_color(size)

  puts "<font size=\"#{size}\">" + 
  "<a href=\"http://ja.wikipedia.org/wiki/#{k}\" style=\"color: #{color}\">" + 
  "#{k}" + 
  "</a></span> "
}
