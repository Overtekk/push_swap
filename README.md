<p align="center">
  <img src="assets_github/push_swap.png" width="350" />
</p>
<h3 align="center">
  <em>Because Swap_push doesn’t feel as natural</em>
</h3>

---

## ⚠️ Disclaimer

- **Full Portfolio:** This repository focuses on this specific project. You can find my entire 42 curriculum 👉 [here](https://github.com/Overtekk/42).
- **Subject Rules:** I strictly follow the rules regarding 42 subjects; I cannot share the PDFs, but I explain the concepts in this README.
- **Archive State:** The code is preserved exactly as it was during evaluation (graded state). I do not update it, so you can see my progress and mistakes from that time.
- **Academic Integrity:** I encourage you to try the project yourself first. Use this repo only as a reference, not for copy-pasting. Be patient, you will succeed.

## 📂 Purpose

The goal of this project is to sort a random list of integers using two stacks (**Stack A** and **Stack B**) and a limited set of instructions. It serves as a deep dive into **algorithmic complexity** and **data structures**.

Unlike standard sorting problems where you can swap any values, here we are constrained by the game rules. We can only manipulate the top of the stacks, push elements between them, or rotate the stacks. The challenge isn't just to sort, but to sort with the **minimum number of operations** possible.

**📊 The Challenge:**
We have to produce a program that takes a list of numbers as arguments and outputs the series of instructions (`sa`, `pb`, `ra`, `rra`...) required to sort them. The efficiency is graded based on the number of moves:
* **100 numbers:** Target is less than 700 moves.
* **500 numbers:** Target is less than 5500 moves.

**📦 Library Integration:**
We are allowed to use our `libft` (especially linked lists or standard helper functions). However, the core logic relies entirely on the custom sorting algorithm we design.

**🏆 Goal:**
Sort the integers in ascending order in Stack A using the lowest possible instruction count.

## 🐨 Status

Not completed yet.

## 🔷 Usage

### First, clone this repository.
```bash
https://github.com/Overtekk/so_long.git
```
### Compile with make
```bash
make
```
⚠️**TO DO**

---
