# CPwithCPP - SelfCheatSheet By Shankar Lohar
<p align = "center" >
<img src = "https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" width = 100/>
<img src = "https://visitor-badge.laobi.icu/badge?page_id=ShankarLohar/CPwithCPP" width = 160/>
</p>

#### Competative Programming = ***(Maths) + (Theoretical knowledge of algorithm design) + (Implementation with a good programming skill)***.

## Constrains I know
| Data Type             |   Bits       | Value Range          |            or                 |
| --------------------- | ------------ | -------------------- |---------------------------- |
| int                   |      32      | -2x10^9 ... 2x10^9   |  -2x10^31 ... 2x10^31 - 1   |
| long long (suffix ll) |     64       | -9x10^18 ... 9x10^18 |  -2x10^63 ... 2x10^63 - 1   |
| double                |     64       | -9x10^18 ... 9x10^18 |  -2x10^63 ... 2x10^63 - 1   |
| long double           |     80       | Accurate for absolute value > 2^53 |  -2x10^79 ... 2x10^79 - 1   |
| __int128_t (g++)      |     128      | -10^38 ... 10^38     | -2x10^127 ... 2x10^127 - 1  |



## Time Complexity - Order of magnitude I know


Input size | Required time complexity : assuming a time limit of [1 second]
-----------|-------------------------
n <= 10 |O(n!)
n <= 20 |O(2^n)
n <= 500 |O(n^3)
n <= 5000 |O(n^2)
n <= 10^6 |O(nlogn) or O(n)
n is large |O(1) or O(logn)


| Complexity Classes | Relation with input (n)|
|------|------|
O(1)|The running time of a constant-time algorithm does not depend on the input size.
O(logn)|A logarithmic algorithm often halves the input size at each step.[Divided by the base]
O(sqrt(n))|A square root algorithm is slower than O(logn) but faster than O(n).
O(n)|This is often the best possible time complexity, because it is usually necessary to access each input element at least once before reporting the answer.
O(nlogn)|This time complexity often indicates that the algorithm sorts the input. Another possibility is that the algorithm uses a data structure where each operation takes O(logn) time.
O(n^2)|A quadratic algorithm often contains two nested loops.
O(n^3)|A cubic algorithm often contains three nested loops.
O(2^n)|This time complexity often indicates that the algorithm iterates through all subsets of the input elements.
O(n!)|This time complexity often indicates that the algorithm iterates through all permutations of the input elements.

### Data Structures I know
-


### Algorithms I know
- [Kadane’s algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem#Kadane's_algorithm)
- 


### GCC Specific Features I know
-

## Mathematics I know
- Modular Arithmetic </br><img src = "https://slideplayer.com/slide/6658984/23/images/17/Rules+of+addition%2C+subtraction+and+multiplication.jpg" width = 400 />
- Sum Formulas - Series : Faulhaber’s formula, AP, GP and Harmonic
- Set Theory
- Logic
- Functions
- Factorials
- Fibbonacci Numbers : Binet's Formula</br><img src = "https://cdn.inchcalculator.com/wp-content/uploads/2020/09/binets-formula-for-fibonacci.png" width = 300 />
- Logarithms</br><img src = "https://www.onlinemathlearning.com/image-files/logarithm-properties.png" width = 400 />
- 


## Basic
- 

## Graph
-

## Advanced
-

## Interesting facts I know
- A property of logarithms is that the number of digits of an integer x in base b is [logb(x) + 1]
- A useful property of logarithms is that logk(x) equals the number of times we have to divide x by k before we reach the number 1
- The newline "\n" in c++ works faster than endl, because endl always causes a flush operation
- A time complexity is only an estimate
of efficiency, because it hides the constant factors.
- NP-hard problems are an important set of problems, for which no polynomial algorithm is known


## Author
| [<img src="https://github.com/ShankarLohar.png?size=100" width=100><br><sub>ShankarLohar</sub>](https://github.com/ShankarLohar) |
| :---: |

## Reference Book
```http
  https://cses.fi/book/book.pdf
```
