<h2><a href="https://leetcode.com/problems/reverse-string-prefix">3794. Reverse String Prefix</a></h2>
<h3>Easy</h3>
<hr>

<p>You are given a string <code>s</code> and an integer <code>k</code>.</p>

<p>Reverse the first <code>k</code> characters of <code>s</code> and return the resulting string.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "abcd", k = 2
<strong>Output:</strong> "bacd"
<strong>Explanation:</strong>
The first k = 2 characters "ab" are reversed to "ba". The final resulting string is "bacd".
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "xyz", k = 3
<strong>Output:</strong> "zyx"
<strong>Explanation:</strong>
The first k = 3 characters "xyz" are reversed to "zyx". The final resulting string is "zyx".
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "hey", k = 1
<strong>Output:</strong> "hey"
<strong>Explanation:</strong>
The first k = 1 character "h" remains unchanged on reversal. The final resulting string is "hey".
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 &lt;= s.length &lt;= 100</code></li>
    <li><code>s</code> consists of lowercase English letters.</li>
    <li><code>1 &lt;= k &lt;= s.length</code></li>
</ul>