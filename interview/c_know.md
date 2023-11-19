# Explain the following coding term

1. `#error`
   1. 寫給編譯器看，為一個預處理指令．只要遇到`#error`就會生成一個錯誤提示訊息並停止
2. `#warning`
   1. 同上，只是會生成警告訊息但不會停止
3. difference between `struct` and `union`
   1. 從記憶體空間的佔用來看，struct佔用的記憶體空間至少為成員的總和; union佔用的記憶體空間為成員中佔用最大空間的size
4. 解釋 `struct`, `union`, `enum`
   1. `struct` 用來表達由多個屬性組成的型別
   2. `union` 同概念但不同資料類型的實體
   3. `enum` 用在宣告僅有少數值的型別
5. `volatile`
   1. 何謂`volatile`

   > 讓cpu裡的運算暫存跟記憶體同步，比如說該記憶體位址的值可能被外部更改（硬體etc），我們必須確保我們取到的是確實的值，而非可能被優化的值
      ```
      i = *pPort;
      j = *pPort;
      k = *pPort;
      ```
      > 以上的i,j,k可能被compiler最佳化而產生 `i = j = k = *pPort`;的程式碼，代表只從pPort讀取一次，而產生 `i = j = k`的結果，而非原本的目的，從`*pPort`讀取三次的值給不同變數 i, j, k．

   2. can we use `volatile` and `const` to decorate the same variable ?
   > 可以，代表的是read-only status register．因爲status register可能會被硬體預期的改變，所以加上`volatile`，`const`是代表軟體行為不應該試圖去改變它．
   3. how about `volatile` to decorate a pointer
      1. 可以，`int *volatile p = addr;` addr會變．而` volatile int *p = addr;`，addr裡的值隨時會變
6. difference between
   1. call by value
   2. call by address
   3. call by reference
7. `inline function`和`macro`的差異
   1. macro是在預處理階段時，將對應macro代表形式做文字的替換
   2. inline func是在編譯階段時，直接用inline func做function的取代
8. Explain `static`
9. overloading function (C++)
10. difference between `struct` and `class` (C++)
11. constructor, deconstructor
12. public, private, protected
13. this pointer
14. virtual function
15. dynamic link and static link
16. template

# 作業系統 term
1. race condition, deadlock
2. how to avoid race condition?
   1. race condition核心問題是，thread之間的共享資源不受到控制．通常是在平行處理以及共享資源的存取會造成問題．可以透過mutex lock或是semaphore來控制共享資源的存取．
3. difference between process and thread
4. difference between kernel space and user space
   1. kerenl space即是Linux kernel的運行空間，user space即是user 程序的運行空間．為了確保系統安全，而將kernel和user隔離開，以確保user crash時，不會影響到kernel．kernel space之下，可以調用一切系統資源及命令．而當user space之下，只能執行簡單運算，並透過system call來調用kernel實際運算的命令．
5. difference between mutex and semaphore and its usage
6. What is OS ?
   1. 確保Process的正確執行
   2. Process間的獨立性 : 即是讓process之間不會互相干擾
   3. 保護硬體 : 分成kernel mode以及user mode確保使用者不會破壞硬體
   4. 提供high level syscall : 確保使用者不能直接操作硬體，並簡化使用者透過syscall來對硬體資源進行存取
7. 解釋 multi-thread multi-process
8. 解釋 deadlock，怎麼避免
9.  解釋 preemptive

[作業系統常見面試和筆試題上](https://www.796t.com/content/1546240689.html)

[作業系統常見面試和筆試題下](https://www.796t.com/content/1550558718.html)

[面試整理1](https://hackmd.io/@g9tdU4gDSTiEZrerd0g7-w/SyCXEfsSE?type=view)

[面試整理2](https://wcodominique.blogspot.com/2014/02/interview-test-part-1.html)

[面試整理3](https://www.mropengate.com/2017/08/cc-c.html)

# 計算機組織
1. 解釋 function stack
2. 如何防止stack overflow
3. 解釋 cpu pipeline
4. 解釋 data hazard

# ARM
1. 根據 FreeRTOS 的 context switch 原始碼，這邊的 isb 指令是做什麼的 ? (跟 memory barrier 有關)
2. 你知道 thumb 嗎 ?
3. ARM cortex-M 是怎麼控制 thumb ?
4. ARM 跟 thumb 指令集有什麼差別 ?
5. 既然你提到 AAPCS ，能否說明一下 AAPCS 的主要流程 ?
6. 你知道 trusted zone 是什麼嗎 ? (M 系列 ARMv8 後才有的樣子)
7. 有用過 A 系列嗎 ?

# Leetcode
1. 建立/刪除/插入/反轉
   1. Stack
   2. Linked list
   3. Queue
   4. Array
2. Sorting :
   1. Bubble
   2. Insertion
   3. Selection
   4. Merge
   5. Quick
   6. Heap
3. Data structure
   1. Array
   2. LinkedList
   3. Stack
   4. Queue
4. Transpose matrix