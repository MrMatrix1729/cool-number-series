# Introduction
This program is a implementation of bruteforcing Krishnamurthy numbers in C++


# What is "Krishnamurthy numbers"?
Krishnamurthy numbers are numbers in which when the factorial of the digits of the number are added, they result in the number itself.
<br><br>
![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%20145%3D1%21&plus;4%21&plus;5%21%7D)


# What is different?
In this program I have used a array to store the value of ![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%20%5B0%21%2C%201%21%2C%20%5Ccdots%2C%209%21%5D%7D). Fetching numbers from an array is way faster then calculating it everytime for each digit.
This combined with the speed of C++, gives very fast speed.

# Customization.

### 0 factorial

Here I have assumed ![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%200%21%3D1%7D), but several argue if it is 0 or 1. 
To achieve for ![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%200%21%3D0%7D), you just need to change this, on line 7-

```
#define ZF 1
```
to this-
```

#define ZF 0
```

### Starting and ending
The program starts from `0` and stops when reached `9,999,999,999,999,999,999`(10 quintillion-1). However this is adjustable.
To achieve this put where to start and where to end after `MIN` and `MAX`, on line 5 and 6-

```
#define MIN 0
#define MAX 999999999999999
```

**Note-** You should keep the min and max in range between `0` and `18,446,744,073,709,551,615`(The upper limit varies depending on your computer and compiler)

## Credits
Thanks to [AkashdeepMexus](https://github.com/AkashdeepMexus) for recommonding this number series!
