echo "enter the first number"
read a
echo "enter the second number"
read b
echo "1.adddition 2.subtraction 3.multiplication 4.division"
echo "enter the choice"
read op
case $op in
1)f=$(($a+$b))
 echo "sum"$f ;;
2)f=$(($a-$b))
echo "diffrence"$f;;
3)f=$(($a*$b))
echo "product "$f;;
4)f=$(($a/$b))
echo "quotient"$f;;
*) echo "invalid choice"
esac
