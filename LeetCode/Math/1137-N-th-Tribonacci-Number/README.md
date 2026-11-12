# 1137. N-th Tribonacci Number

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Platform: LeetCode](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge)
![Status: ACCEPTED](https://img.shields.io/badge/Status-ACCEPTED-success?style=for-the-badge)

## 📋 Problem Details

| Metric | Detail |
| :--- | :--- |
| **Platform** | [LeetCode](https://leetcode.com/problems/n-th-tribonacci-number) |
| **Problem Link** | [View Problem on LeetCode](https://leetcode.com/problems/n-th-tribonacci-number) |
| **Language** | `C++` |
| **Estimated Time Complexity** | `O(N)` |
| **Estimated Space Complexity** | `O(N^2)` |
| **Topics / Tags** | `Math`, `Dynamic Programming`, `Memoization` |
| **Synchronized At** | `Thu, 12 Nov 2026 05:43:15 GMT` |

---

## 📝 Problem Description

<p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and T<sub>n+3</sub> = T<sub>n</sub> + T<sub>n+1</sub> + T<sub>n+2</sub> for n &gt;= 0.</p>

<p>Given <code>n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 25
<strong>Output:</strong> 1389537
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 37</code></li>
	<li>The answer is guaranteed to fit within a 32-bit integer, ie. <code>answer &lt;= 2^31 - 1</code>.</li>
</ul>

---

### 💡 Solution Note
Automatically synchronized by **[CodeSync v3.1.0](https://studyit.in)** — Universal Multi-Platform Solution Sync Engine powered by [Studyit.in](https://studyit.in).
