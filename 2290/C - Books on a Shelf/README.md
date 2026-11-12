<h2><a href="https://codeforces.com/contest/2290/problem/C" target="_blank" rel="noopener noreferrer">2290C — Books on a Shelf</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290C](https://codeforces.com/contest/2290/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Books on a Shelf</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>There are $$$n$$$ books, and the height of the $$$i$$$-th book is $$$h_i$$$. You put all the books on a shelf in a row in <span class="tex-font-style-bf">any order</span> you like.</p><p>A book is visible from the left if it is strictly taller than every book to its left. A book is visible from the right if it is strictly taller than every book to its right. In particular, the leftmost book is visible from the left, and the rightmost book is visible from the right.</p><p>Find the maximum possible number of books that are visible from at least one side, and <span class="tex-font-style-bf">any</span> arrangement of the books with this number of visible books.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the number of books.</p><p>The second line of each test case contains $$$n$$$ integers $$$h_1, h_2, \ldots, h_n$$$ ($$$1 \le h_i \le 10^9$$$) — the heights of the books.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two lines.</p><p>In the first line, print a single integer $$$k$$$ — the maximum possible number of books that are visible from at least one side.</p><p>In the second line, print $$$n$$$ integers — the heights of the books from left to right in an arrangement in which exactly $$$k$$$ books are visible from at least one side. These $$$n$$$ integers must be the integers $$$h_1, h_2, \ldots, h_n$$$ in some order.</p><p>If there are several such arrangements, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027829489238797134" id="id003318909646737168" class="input-output-copier">Copy</div></div><pre data-content="5
6
1 2 2 3 3 3
1
5
3
7 7 7
4
4 1 3 2
11
3 1 4 1 5 9 2 6 5 3 5
" id="id0027829489238797134"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 2 3 3 3</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">7 7 7</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">4 1 3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">11</div><div class="test-example-line test-example-line-odd test-example-line-5">3 1 4 1 5 9 2 6 5 3 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008006951963804071" id="id007981159238999361" class="input-output-copier">Copy</div></div><pre id="id008006951963804071">5
2 3 3 3 2 1
1
5
2
7 7 7
4
3 4 2 1
10
1 3 4 5 9 5 6 5 3 2 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, in the arrangement $$$[2, 3, 3, 3, 2, 1]$$$, the first book of height $$$2$$$ and the first book of height $$$3$$$ are visible from the left. The book of height $$$1$$$, the last book of height $$$2$$$, and the last book of height $$$3$$$ are visible from the right. In total, $$$5$$$ books are visible.</p><p>In the third test case, the leftmost book is visible from the left and the rightmost book is visible from the right, but the middle book is visible from neither side.</p></div>