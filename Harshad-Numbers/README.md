# Introduction
This program is a implementation of bruteforcing Harshad numbers in C++


# What is "Harshad numbers"?
Harshad numbers are numbers in which the addition of the digits of the number is divisible by the number itself.
<br><br>
![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%209854%2C%20%5Cfrac%7B9854%7D%7B9&plus;8&plus;5&plus;4%7D%3D379%7D)

#### Reference

[Wolfram](https://mathworld.wolfram.com/HarshadNumber.html)
<br>
[OEIS](https://oeis.org/A005349)


# Customization

### Starting and ending
The program starts from `0` and stops when reached `MAX`. However this is adjustable.
To achieve this put where to start and where to end after `MIN` and `MAX`, on line 3 and 4-

```
#define MIN 0
#define MAX 999999999999999
```

**Note-** You should keep the min and max in range between `0` and `18,446,744,073,709,551,615`(The upper limit varies depending on your computer and compiler)
