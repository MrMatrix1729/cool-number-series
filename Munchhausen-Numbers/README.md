# Introduction
This program is a implementation of bruteforcing Munchaussen numbers in C++


# What is "Munchaussen numbers"?
Munchaussen numbers are numbers in which when the digits of the number are raised to itself and then added, they result in the number itself.
<br><br>
![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D3435%3D3%5E3&plus;4%5E4&plus;3%5E3&plus;5%5E5)

#### Reference-

[Wolfram](https://mathworld.wolfram.com/MuenchhausenNumber.html)
<br>
[OEIS](https://oeis.org/A046253)


# What is different?
In this program I have used a array to store the value of ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%2C%201%5E1%2C%20%5Ccdots%2C%209%5E9). Fetching numbers from an array is way faster then calculating it everytime for each digit.
This combined with the speed of C++, gives an approximate time of checking `20,000 numbers/second` 

# Customization

### 0 to power 0

Here I have assumed ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D0), but several argue if it is 0 or 1. 
To achieve for ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D1), you just need to change this, on line 20-

```
{0,1,4,27,256,3125,46656,823543,16777216,387420489}
```
to this-
```
{1,1,4,27,256,3125,46656,823543,16777216,387420489}
```

### Starting and ending
The program starts from `0` and stops when reached `9,999,999,999,999,999,999`(10 quintillion-1). However this is adjustable.
To achieve this put where to start and where to end after `MIN` and `MAX`, on line 3 and 4-

```
#define MIN 0
#define MAX 999999999999999
```

**Note-** You should keep the min and max in range between `0` and `18,446,744,073,709,551,615`(The upper limit varies depending on your computer and compiler)
