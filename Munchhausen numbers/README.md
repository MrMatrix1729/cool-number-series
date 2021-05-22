# Introduction
This program is a implementation of bruteforcing Munchaussen numbers in C++


# What is "Munchaussen numbers"?
Munchaussen numbers are numbers in which when the digits of the number are raised to itself and then added, they result in the number itself.

<br><br>
![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D3435%3D3%5E3&plus;4%5E4&plus;3%5E3&plus;5%5E5)

<br>
### Reference-

[Wolfram](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjmvZXHnt3wAhVY4nMBHWTjBX0QFjABegQIAhAD&url=https%3A%2F%2Fmathworld.wolfram.com%2FMuenchhausenNumber.html&usg=AOvVaw2J5VTwGBNubm40heXrLEG7)
<br>
[OEIS](https://oeis.org/A046253)


# What is different?
In this program I have used a array to store the value of ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%2C%201%5E1%2C%20%5Ccdots%2C%209%5E9). Fetching numbers from an array is way faster then calculation it everytime for each digit.
This combined with the Speed of C++, gives an approximate time of checking `20,000 numbers/second` 

# Customization
Here i have assumed ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D0), but several argue if it is 0 or 1. 
To achieve for ![equation](https://latex.codecogs.com/svg.latex?%5Ccolor%7BTeal%7D0%5E0%3D1), you just need to change this, on line 20-

```
{0,1,4,27,256,3125,46656,823543,16777216,387420489}
```
to this-
```
{1,1,4,27,256,3125,46656,823543,16777216,387420489}

```