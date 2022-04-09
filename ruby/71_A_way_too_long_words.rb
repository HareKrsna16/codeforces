
n = gets.to_i

for i in 1..n do
  str = gets.to_s
  if str.length > 10
    newstr = str[0] + (str.length - 3).to_s + str[str.length - 2] 
    str = newstr
  end
  puts str
end
