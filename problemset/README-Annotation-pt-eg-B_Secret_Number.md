
---

```
Mode: Solve the coding problem by structuring the solution to discover the secret number.
Plataform: CodeForce
Author: Luiz Fellipe Moreschi de Lima
Linguage: Englis (UK)
```

---

# **ProblemSet** B - The Secret Number(C).

---

## Dividing the problems

- *A - Problem One ➡︎ Vadim has thought of a **number x**.*
    - How I Approached Problem One *:* **Vadim thought of a number x. This number is represented as the variable x in the problem.**

- *B - Problem Two ➡︎ To ensure that no one can guess it, he appended a positive of number zeros to the right of it, thus **obtaining** a new number y.*
    - How I Approached Problem Two *:*  **Quest two. It's necessary to understand what Vadim meant by the zeros on the right side of the number. To make sure no one could guess it, he added zeros to the number. Therefore *x* receive.**

- *C - Problem three ➡︎ However, as a precaution, Vadim decided to spread the number n = x + y. Find all suitable x that Vadim could have thought of for the given n.*

    - How I Approached Problem Three *:* **As Vadim thought in terms of the parameters *x and y*, where *n* receive these parameters.** 

    ```
    quest
        x > 0 variable
        y = x * t = 10^4 -> new variable
        
        
    ```

---

## Example to solve INPUTs

- Each test consists of several test cases. The First line contains a single integer **t** (1 ≤ t ≤ 10^4) - the number of test cases. The folliwing

    - In a single line of each test case, there is an integer **n** - the number spread by Vadim (11 ≤ n ≤ 10^18)

## Output
- For each number **n**, output 0 if there are no suitable **x**. Otherwise, output the number of suitable **x**, followed by all suitable **x** in ascending order.

            ```
            input
            5
                1111
                12
                55
                999999999999999999
                1000000000000000000
            ```
                ```
                output
                2
                11 101
                0
                1
                5
                3
                999999999 999000999000999 90909090909090909
                0
                ```

---

## How I solved It

- *

