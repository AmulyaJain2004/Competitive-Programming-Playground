<h2><a href="https://codeforces.com/contest/2289/problem/A" target="_blank" rel="noopener noreferrer">2289A — Problem from Dolgoderevenskoye</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2289A](https://codeforces.com/contest/2289/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Problem from Dolgoderevenskoye</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$x$$$. Consider a set of cards such that for every positive divisor $$$d$$$ of the number $$$x$$$, there is exactly one card with the number $$$d$$$.</p><p>Two players play the following game. The players take turns, with Artem moving first. On each move, a player must remove one card from the set.</p><p>On the first move, Artem may remove any card. On each subsequent move, the player must remove a card whose parity is opposite to the parity of the card removed on the previous move. In other words, if the previous player removed a card with an even number, the next player must remove a card with an odd number, and vice versa. The player who cannot make a move loses.</p><p>For example, if $$$x = 6$$$, then initially there are cards with numbers $$$1$$$, $$$2$$$, $$$3$$$, and $$$6$$$. If Artem removes the card with number $$$6$$$ on his first move, then the second player must remove the card with number $$$1$$$ or $$$3$$$. After the second player's move, Artem will be able to remove only the card with number $$$2$$$ from the set.</p><p>Determine whether Artem will win if both players play optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The only line of each test case contains one integer $$$x$$$ ($$$1 \le x \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">Yes</span>" if Artem wins, and "<span class="tex-font-style-tt">No</span>" otherwise.</p><p>You may print each letter in any case (lowercase or uppercase). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be accepted as positive answers.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00049496925638405354" id="id0024623261336608904" class="input-output-copier">Copy</div></div><pre data-content="10
1
2
6
12
8
31
74
75
1111111111
998244358989466118
" id="id00049496925638405354"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-even test-example-line-4">12</div><div class="test-example-line test-example-line-odd test-example-line-5">8</div><div class="test-example-line test-example-line-even test-example-line-6">31</div><div class="test-example-line test-example-line-odd test-example-line-7">74</div><div class="test-example-line test-example-line-even test-example-line-8">75</div><div class="test-example-line test-example-line-odd test-example-line-9">1111111111</div><div class="test-example-line test-example-line-even test-example-line-10">998244358989466118</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0037473195533283865" id="id005090851770393864" class="input-output-copier">Copy</div></div><pre data-content="Yes
No
No
Yes
Yes
Yes
No
Yes
Yes
No
" id="id0037473195533283865"><div class="test-example-line test-example-line-odd test-example-line-1">Yes</div><div class="test-example-line test-example-line-even test-example-line-2">No</div><div class="test-example-line test-example-line-odd test-example-line-3">No</div><div class="test-example-line test-example-line-even test-example-line-4">Yes</div><div class="test-example-line test-example-line-odd test-example-line-5">Yes</div><div class="test-example-line test-example-line-even test-example-line-6">Yes</div><div class="test-example-line test-example-line-odd test-example-line-7">No</div><div class="test-example-line test-example-line-even test-example-line-8">Yes</div><div class="test-example-line test-example-line-odd test-example-line-9">Yes</div><div class="test-example-line test-example-line-even test-example-line-10">No</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Artem wins because there is only one card in the set, with the number $$$1$$$.</p><p>In the second test case, Artem loses. Initially, the set contains cards with numbers $$$1$$$ and $$$2$$$. Since these cards have different parity, the second player will always be able to make a move after Artem's first move.</p><p>In the fourth test case, initially the set contains cards with numbers $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$, $$$6$$$, and $$$12$$$.</p></div>