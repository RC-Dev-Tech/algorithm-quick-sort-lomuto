# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Quick Sort (Lomuto partition scheme)<br> 快速排序（洛穆托分區方案）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
快速排序（Quick Sort）是一種常見且高效的排序算法，屬於比較排序的一種。<br>
它的基本概念是選擇一個基準元素（pivot），將數列劃分為兩個子數列，<br>
其中一個子數列中的元素都小於基準元素，另一個子數列中的元素都大於基準元素。<br>
然後對兩個子數列分別遞迴地應用快速排序，直到排序完成。<br>
<br>
Lomuto partition scheme 則是快速排序的一種分區方案，其過程如下：<br>
- 選擇最右邊的元素作為基準點（pivot）。
- 初始化一個指標i，指向數列的起始位置。
- 遍歷數列，從起始位置到倒數第二個元素（n-1）：
  - 如果當前元素小於等於基準點，則將該元素與指標i所指的位置的元素進行交換，<br>
    並將指標i向後移動一位。
- 將基準點與指標i所指的位置的元素進行交換，這樣基準點左邊的元素都小於等於基準點，<br>
  右邊的元素都大於基準點。
- 遞迴應用快速排序到基準點左右兩個子數列上，直到排序完成。

<br>

其時間複雜度：<br>
- 平均情況下：O(n log n)
- 最壞情況下（當數列已經有序）：O(n^2)
- 最好情況下（當數列元素分布較為均勻）：O(n log n)
<br>
快速排序的時間複雜度取決於基準點的選擇以及數列的分割情況。<br>
在平均情況下，快速排序具有很高的效率，但在最壞情況下，快速排序的效率會下降到O(n^2)。

---

## 示意圖:
<img src="https://drive.google.com/uc?id=1JJv1ARTBczJaDoBM2UOY9SmBv7Ups8Jt" height="70%" width="70%"/>
<img src="https://drive.google.com/uc?id=1BF_4bE_VAByMQZvCP_GqW6mYCzhOdHMj" height="70%" width="70%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 快速排序法 Quick Sort](https://ithelp.ithome.com.tw/articles/10278644)

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-quick-sort-lomuto/blob/main/C%2B%2B/main.cpp) - Lomuto Quick Sort (C++)

---

## 參考資料
* [Wiki - Quick Sort](https://zh.wikipedia.org/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F) <br>
* [iThome鐵人賽(Frank) - 演算法 快速排序法 Quick Sort](https://ithelp.ithome.com.tw/articles/10278644) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
