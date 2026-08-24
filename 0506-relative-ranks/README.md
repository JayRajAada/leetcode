<h2><a href="https://leetcode.com/problems/relative-ranks">506. Relative Ranks</a></h2>
<h3>Easy</h3>
<hr>

<p>You are given an integer array <code>score</code> of size <code>n</code>, where <code>score[i]</code> is the score of the <code>i<sup>th</sup></code> athlete in a competition. All the scores are guaranteed to be unique.</p>

<p>The athletes are <strong>placed</strong> based on their scores, where the 1<sup>st</sup> place athlete has the highest score, the 2<sup>nd</sup> place athlete has the 2<sup>nd</sup> highest score, and so on. The placement of each athlete determines their rank:</p>

<ul>
    <li>The 1<sup>st</sup> place athlete's rank is <code>"Gold Medal"</code>.</li>
    <li>The 2<sup>nd</sup> place athlete's rank is <code>"Silver Medal"</code>.</li>
    <li>The 3<sup>rd</sup> place athlete's rank is <code>"Bronze Medal"</code>.</li>
    <li>For the 4<sup>th</sup> place to the <code>n<sup>th</sup></code> place athlete, their rank is their placement number (i.e., the <code>x<sup>th</sup></code> place athlete's rank is <code>"x"</code>).</li>
</ul>

<p>Return an array <code>answer</code> of size <code>n</code> where <code>answer[i]</code> is the <strong>rank</strong> of the <code>i<sup>th</sup></code> athlete.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> score = [5,4,3,2,1]
<strong>Output:</strong> ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
<strong>Explanation:</strong> The placements are [1st, 2nd, 3rd, 4th, 5th].
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> score = [10,3,8,9,4]
<strong>Output:</strong> ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
<strong>Explanation:</strong> The placements are [1st, 5th, 3rd, 2nd, 4th].
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>n == score.length</code></li>
    <li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
    <li><code>0 &lt;= score[i] &lt;= 10<sup>6</sup></code></li>
    <li>All the values in <code>score</code> are <strong>unique</strong>.</li>
</ul>