<h2><a href="https://codeforces.com/contest/2285/problem/A" target="_blank" rel="noopener noreferrer">2285A — Composite Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2285A](https://codeforces.com/contest/2285/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Composite Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given an integer $$$n$$$. Construct a permutation$$$^{\text{∗}}$$$ $$$p$$$ of length $$$n$$$ such that $$$i \cdot p_i$$$ is composite$$$^{\text{†}}$$$ for every $$$1 \le i \le n$$$, or determine that no such permutation exists.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A permutation of length $$$n$$$ is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array).</p><p>$$$^{\text{†}}$$$A positive integer $$$x$$$ is composite if it has at least one other divisor besides $$$1$$$ and $$$x$$$. For example, $$$6$$$ is composite because $$$2$$$ is a divisor of it, while $$$1$$$ and $$$5$$$ are not.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if no suitable permutation exists, print a single integer $$$-1$$$.</p><p>Otherwise, print $$$n$$$ integers $$$p_1, p_2, \ldots, p_n$$$ representing a suitable permutation.</p><p>If there are multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008057011958970757" id="id007107661498178713" class="input-output-copier">Copy</div></div><pre data-content="3
1
4
5
" id="id008057011958970757"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003919619302867947" id="id0010024771233604268" class="input-output-copier">Copy</div></div><pre data-content="-1
4 3 2 1
4 5 3 1 2
" id="id003919619302867947"><div class="test-example-line test-example-line-odd test-example-line-1">-1</div><div class="test-example-line test-example-line-even test-example-line-2">4 3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4 5 3 1 2</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it can be shown that no suitable permutation exists.</p><p>In the second test case, the values of $$$i\cdot p_i$$$ are $$$4$$$, $$$6$$$, $$$6$$$, and $$$4$$$, respectively, which are all composite.</p></div>