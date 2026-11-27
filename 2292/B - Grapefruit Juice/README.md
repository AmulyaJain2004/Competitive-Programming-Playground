<h2><a href="https://codeforces.com/contest/2292/problem/B" target="_blank" rel="noopener noreferrer">2292B — Grapefruit Juice</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2292B](https://codeforces.com/contest/2292/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. Grapefruit Juice</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>After making the sweet toast, Sunny and Aubrey turned their attention to the grapefruits that Sunny had brought for their picnic.</p><p>They have $$$n$$$ grapefruits in total. The $$$i$$$-th grapefruit has a taste value of $$$a_i$$$.</p><p>They can enjoy the grapefruits in two ways:</p><ul> <li> eat the $$$i$$$-th grapefruit fresh and gain $$$a_i$$$ joy points;</li><li> make a glass of juice from any $$$k$$$ grapefruits and drink it to gain $$$p$$$ joy points. </li></ul><p>Each grapefruit can be used only once: either eaten fresh or used to make a glass of juice. They can make any number of glasses of juice.</p><p>What is the maximum total number of joy points they can gain?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains three integers $$$n$$$, $$$k$$$, and $$$p$$$ ($$$1 \le n \le 2 \cdot 10^5$$$, $$$1 \le k \le n$$$, $$$1 \le p \le 10^9$$$) — the number of grapefruits, the number of fruits per glass of juice, and the joy points for a glass of juice.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the taste ratings of the grapefruits.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the maximum possible total joy.</p><p>The answer may not fit into a 32-bit signed integer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008862286328381646" id="id00324303646345139" class="input-output-copier">Copy</div></div><pre data-content="7
4 2 10
3 1 4 2
3 3 100
10 20 30
3 1 5
2 3 1
4 2 5
3 1 1 1
3 2 10
9 1 2
2 2 4
8 7
4 2 5
1 1 9 9
" id="id008862286328381646"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">4 2 10</div><div class="test-example-line test-example-line-odd test-example-line-1">3 1 4 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 3 100</div><div class="test-example-line test-example-line-even test-example-line-2">10 20 30</div><div class="test-example-line test-example-line-odd test-example-line-3">3 1 5</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3 1</div><div class="test-example-line test-example-line-even test-example-line-4">4 2 5</div><div class="test-example-line test-example-line-even test-example-line-4">3 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5">3 2 10</div><div class="test-example-line test-example-line-odd test-example-line-5">9 1 2</div><div class="test-example-line test-example-line-even test-example-line-6">2 2 4</div><div class="test-example-line test-example-line-even test-example-line-6">8 7</div><div class="test-example-line test-example-line-odd test-example-line-7">4 2 5</div><div class="test-example-line test-example-line-odd test-example-line-7">1 1 9 9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00830790193248063" id="id004185442096058488" class="input-output-copier">Copy</div></div><pre data-content="20
100
15
10
19
15
23
" id="id00830790193248063"><div class="test-example-line test-example-line-odd test-example-line-1">20</div><div class="test-example-line test-example-line-even test-example-line-2">100</div><div class="test-example-line test-example-line-odd test-example-line-3">15</div><div class="test-example-line test-example-line-even test-example-line-4">10</div><div class="test-example-line test-example-line-odd test-example-line-5">19</div><div class="test-example-line test-example-line-even test-example-line-6">15</div><div class="test-example-line test-example-line-odd test-example-line-7">23</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second test case, one glass gives $$$100$$$ points. Eating all three fruits fresh gives $$$10+20+30=60$$$ points.</p><p>In the fifth test case, the friends can squeeze the fruits rated $$$1$$$ and $$$2$$$ and eat the fruit rated $$$9$$$ fresh. This gives $$$10+9=19$$$ points. Eating all three fresh would give $$$12$$$ points.</p><p>In the seventh test case, using the two fruits rated $$$1$$$ for one glass gives $$$5+9+9=23$$$ points. Making no juice gives $$$20$$$ points, and making two glasses gives $$$10$$$.</p></div>