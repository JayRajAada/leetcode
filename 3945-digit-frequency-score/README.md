<h2><a href="https://leetcode.com/problems/digit-frequency-score">3945. Digit Frequency Score</a></h2>
<h3>Easy</h3>
<hr>

<p>You are given an integer <code>n</code>.</p>

<p>The <strong>score</strong> of <code>n</code> is defined as the <strong>sum</strong> of <code>d * freq(d)</code> over all <strong>distinct</strong> digits <code>d</code>, where <code>freq(d)</code> denotes the number of times the digit <code>d</code> appears in <code>n</code>.</p>

<p>Return an integer denoting the score of <code>n</code>.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> n = 122
<strong>Output:</strong> 5
<strong>Explanation:</strong>
<ul>
    <li>The digit 1 appears 1 time, contributing 1 * 1 = 1.</li>
    <li>The digit 2 appears 2 times, contributing 2 * 2 = 4.</li>
    <li>Thus, the score of n is 1 + 4 = 5.</li>
</ul>
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> n = 101
<strong>Output:</strong> 2
<strong>Explanation:</strong>
<ul>
    <li>The digit 0 appears 1 time, contributing 0 * 1 = 0.</li>
    <li>The digit 1 appears 2 times, contributing 1 * 2 = 2.</li>
    <li>Thus, the score of n is 2.</li>
</ul>
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>