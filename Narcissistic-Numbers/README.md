# Introduction
This program is a implementation of bruteforcing Munchaussen numbers in C++


# What is "Narcissistic numbers"?
Narcissistic numbers are numbers in which when the digits of the number are raised to the number of digits in the number and then added, they result in the number itself
<br><br>
![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%20153%3D1%5E3&plus;5%5E3&plus;3%5E3%7D)

#### Reference-

[Wolfram](https://mathworld.wolfram.com/NarcissisticNumber.html)
<br>
[OEIS](https://oeis.org/A005188)


# What is different?
In this program I have used a 2-d array to store the value of 
<br>
![equation](https://latex.codecogs.com/svg.latex?%7B%5Ccolor%7BTeal%7D%20%5Cbegin%7Bbmatrix%7D%200%5E0%20%261%5E0%20%26%5Ccdots%20%269%5E0%5C%5C%200%5E1%20%261%5E1%20%26%5Ccdots%20%269%5E1%20%5C%5C%20%5Cvdots%20%26%5Cvdots%20%26%5Cddots%20%26%5Cvdots%5C%5C%200%5E9%20%261%5E9%20%26%5Ccdots%20%26%5C9%5E9%20%5Cend%7Bbmatrix%7D%7D)
<br>
Fetching numbers from a 2-d array is way faster then calculating it everytime for each digit.
This combined with the speed of C++, gives an approximate time of checking `20,000 numbers/second` 

# Customization

### 0 to power 0

Here I have assumed ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D0), but several argue if it is 0 or 1. 
To achieve for ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D1), you just need to change this, on line 5-

```
#define ZPZ 0 
```
to this-
```
#define ZPZ 1
```

### Starting and ending
The program starts from `0` and stops when reached `9,999,999,999,999,999,999`(10 quintillion-1). However this is adjustable.
To achieve this put where to start and where to end after `MIN` and `MAX`, on line 3 and 4-

```
#define MIN 0
#define MAX 999999999999999
```

**Note-** You should keep the min and max in range between `0` and `18,446,744,073,709,551,615`(The upper limit varies depending on your computer and compiler)
