<h2><a href="https://codeforces.com/contest/2292/problem/A" target="_blank" rel="noopener noreferrer">2292A — Picnic for Two</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2292A](https://codeforces.com/contest/2292/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Picnic for Two</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Sunny and Aubrey decided to spend the day together and have a picnic. They started their morning by preparing a dessert and baked a large, round sweet toast, pre-cut into $$$l$$$ equal slices numbered from $$$0$$$ to $$$l-1$$$ in clockwise order.</p><p>The friends decided to decorate it with fresh berries: </p><ul> <li> Aubrey is in charge of strawberries. She places one berry every $$$a$$$ slices, starting from slice $$$0$$$ (that is, at positions $$$0, a \bmod l, 2a \bmod l, \dots$$$), until she returns to an already visited slice. </li><li> Sunny is in charge of blueberries. He places one berry every $$$b$$$ slices, starting from slice $$$0$$$ (that is, at positions $$$0, b \bmod l, 2b \bmod l, \dots$$$), until his placement cycle repeats as well. </li></ul><p>A slice of toast is considered <span class="tex-font-style-it">ideal</span> if it ends up with both a strawberry and a blueberry on it. Count the total number of ideal slices on the toast.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>Each of the next $$$t$$$ lines contains three integers $$$l$$$, $$$a$$$, and $$$b$$$ ($$$2 \le l \le 22$$$, $$$1 \le a, b \le 21$$$) — the number of slices in the toast and the steps with which Aubrey and Sunny place their berries.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the number of ideal slices on the toast.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0044296377879801396" id="id00543873395429771" class="input-output-copier">Copy</div></div><pre data-content="5
6 2 3
10 4 7
5 1 1
4 10 21
15 20 8
" id="id0044296377879801396"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">6 2 3</div><div class="test-example-line test-example-line-even test-example-line-2">10 4 7</div><div class="test-example-line test-example-line-odd test-example-line-3">5 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">4 10 21</div><div class="test-example-line test-example-line-odd test-example-line-5">15 20 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006043270375893359" id="id008466836599522538" class="input-output-copier">Copy</div></div><pre data-content="1
5
5
2
3
" id="id006043270375893359"><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case the strawberries are on slices $$$0,2,4$$$, and the blueberries are on slices $$$0,3$$$. Only slice $$$0$$$ has both berries.</p><p>In the second test case Aubrey visits slices $$$0,4,8,2,6$$$. With a step of $$$7$$$, Sunny visits slices $$$0,7,4,1,8,5,2,9,6,3$$$. All five slices on which Aubrey placed a strawberry receive both berries.</p><p>In the fourth test case, the steps $$$10$$$ and $$$21$$$ are equivalent to steps $$$2$$$ and $$$1$$$ modulo $$$4$$$. Both berries appear on slices $$$0$$$ and $$$2$$$.</p></div>