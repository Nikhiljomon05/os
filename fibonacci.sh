echo "enter the limit"
read n
echo "seriesssss"
x=0
y=1
for((i=0;i<=n;i++))
do
echo $x
f=$(($x+$y))
x=$y
y=$f
done
