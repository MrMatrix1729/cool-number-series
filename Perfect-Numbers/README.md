# Introduction
This program is a implementation of bruteforcing Perfect numbers in C++


# What is "Perfect numbers"?
Perfect numbers are numbers in which the addition of the factors of the numbers (excluding itself) results in the number itself.
<br><br>
![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%2028=1+2+4+7+14)

#### Reference-

[Wikipedia](https://en.wikipedia.org/wiki/Perfect_number)
<br>
[OEIS](https://oeis.org/A000396)

# Customization

### Starting and ending
The program starts from `0` and stops when reached `9,999,999,999,999,999,999`(10 quintillion-1). However this is adjustable.
To achieve this put where to start and where to end after `MIN` and `MAX`, on line 3 and 4-

```
#define MIN 0
#define MAX 999999999999999
```

**Note-** You should keep the min and max in range between `0` and `18,446,744,073,709,551,615`(The upper limit varies depending on your computer and compiler)
