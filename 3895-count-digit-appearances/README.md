<h2><a href="https://leetcode.com/problems/count-digit-appearances">3895. Count Digit Appearances</a></h2>
<h3>Medium</h3>
<hr>

<p>You are given an integer array <code>nums</code> and an integer <code>digit</code>.</p>

<p>Return <em>the total number of times </em><code>digit</code><em> appears in the decimal representation of all elements in </em><code>nums</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [12,54,32,22], digit = 2
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The digit 2 appears once in 12 and 32, and twice in 22. Thus, the total number of times digit 2 appears is 4.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,34,7], digit = 9
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The digit 9 does not appear in the decimal representation of any element in nums, so the total number of times digit 9 appears is 0.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 &lt;= nums.length &lt;= 1000</code></li>
    <li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
    <li><code>0 &lt;= digit &lt;= 9</code></li>
</ul>