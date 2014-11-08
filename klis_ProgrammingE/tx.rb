# coding: UTF-8

tx_futsuu = ["秋葉原", "新御徒町", "浅草", "南千住", "北千住", "青井", "六町", "八潮", "三郷中央", "南流山", "流山セントラルパーク", "流山おおたかの森", "柏の葉キャンパス", "柏たなか", "守谷", "みらい平", "みどりの", "万博記念公園", "研究学園", "つくば"]
tx_kaisoku = ["秋葉原", "新御徒町", "浅草", "南千住", "北千住", "南流山", "流山おおたかの森", "守谷", "つくば"]
jikan_futsuu = [2, 2, 3, 3, 3, 2, 4, 3, 3, 3, 2, 3, 3, 4, 5, 3, 3, 3, 3]
jikan_kaisoku = [2, 2, 3, 3, 10, 5, 7, 13]

def hantei(array, station)
  return array.include?(station)
end

def ichiran(stations, times, from_station, to_station)
  from_station_position = stations.index(from_station)
  to_station_position   = stations.index(to_station)

  # 下り
  if from_station_position > to_station_position
    stations.reverse!
    times.reverse!
    from_station_position = (stations.length - 1) - from_station_position
    to_station_position   = (stations.length - 1) - to_station_position
  end

  p to_station_position

  puts stations[from_station_position..to_station_position].join("==>")
  puts "時間: #{times[from_station_position..(to_station_position - 1)].inject(:+)}分"
end

ichiran(tx_futsuu, jikan_futsuu, "秋葉原", "つくば")
ichiran(tx_kaisoku, jikan_kaisoku, "守谷", "秋葉原")
