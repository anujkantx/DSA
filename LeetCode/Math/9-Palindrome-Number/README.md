# 9. Palindrome Number

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Platform: LeetCode](https://img.shields.io/badge/Platform-LeetCode-blue?style=for-the-badge)
![Status: ACCEPTED](https://img.shields.io/badge/Status-ACCEPTED-success?style=for-the-badge)

## 📋 Problem Details

| Metric | Detail |
| :--- | :--- |
| **Platform** | [LeetCode](https://leetcode.com/problems/palindrome-number) |
| **Problem Link** | [View Problem on LeetCode](https://leetcode.com/problems/palindrome-number) |
| **Language** | `Python3` |
| **Estimated Time Complexity** | `O(N)` |
| **Estimated Space Complexity** | `O(1)` |
| **Topics / Tags** | `Math` |
| **Synchronized At** | `Wed, 11 Nov 2026 10:42:23 GMT` |

---

## 📝 Problem Description

<p>Given an integer <code>x</code>, return <code>true</code> if <code>x</code> is a <span data-keyword="palindrome-integer"><strong>palindrome</strong></span>, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 121
<strong>Output:</strong> true
<strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without converting the integer to a string?

---

### 💡 Solution Note
Automatically synchronized by **[CodeSync v3.1.0](https://studyit.in)** — Universal Multi-Platform Solution Sync Engine powered by [Studyit.in](https://studyit.in).
