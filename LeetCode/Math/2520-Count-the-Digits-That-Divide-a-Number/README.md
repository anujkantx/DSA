# 2520. Count the Digits That Divide a Number

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Platform: LeetCode](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge)
![Status: ACCEPTED](https://img.shields.io/badge/Status-ACCEPTED-success?style=for-the-badge)

## 📋 Problem Details

| Metric | Detail |
| :--- | :--- |
| **Platform** | [LeetCode](https://leetcode.com/problems/count-the-digits-that-divide-a-number) |
| **Problem Link** | [View Problem on LeetCode](https://leetcode.com/problems/count-the-digits-that-divide-a-number) |
| **Language** | `Python3` |
| **Estimated Time Complexity** | `O(N)` |
| **Estimated Space Complexity** | `O(1)` |
| **Topics / Tags** | `Math` |
| **Synchronized At** | `Wed, 11 Nov 2026 10:30:34 GMT` |

---

## 📝 Problem Description

<p>Given an integer <code>num</code>, return <em>the number of digits in <code>num</code> that divide </em><code>num</code>.</p>

<p>An integer <code>val</code> divides <code>nums</code> if <code>nums % val == 0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 7
<strong>Output:</strong> 1
<strong>Explanation:</strong> 7 divides itself, hence the answer is 1.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 121
<strong>Output:</strong> 2
<strong>Explanation:</strong> 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 1248
<strong>Output:</strong> 4
<strong>Explanation:</strong> 1248 is divisible by all of its digits, hence the answer is 4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 10<sup>9</sup></code></li>
	<li><code>num</code> does not contain <code>0</code> as one of its digits.</li>
</ul>

---

### 💡 Solution Note
Automatically synchronized by **[CodeSync v3.1.0](https://studyit.in)** — Universal Multi-Platform Solution Sync Engine powered by [Studyit.in](https://studyit.in).
