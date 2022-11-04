# shellcode練習

使用Ubuntu 20.04，編譯時使用-fno-stack-protector 以及-z execstack，並關閉ASLR。

將main function 做 disassembly :

![](C:\Users\rr200\Documents\CCU\四上\安全程式設計\shellcode練習\dismain2.PNG)

將ValidatePassword做 disassembly :

![](C:\Users\rr200\Documents\CCU\四上\安全程式設計\shellcode練習\disval.PNG)



ValidatePassword這個function在執行階段的stack frame中的記憶體內容如下:

紅框為return address在記憶體中的所在地

![](C:\Users\rr200\Documents\CCU\四上\安全程式設計\shellcode練習\rsp.PNG)



製作造成buffer overflow的input檔案的畫面 :

新的return address 改成 0x7fffffffdeb0，shellcode從0x7fffffffdeb0這一個位址開始放

![](C:\Users\rr200\Documents\CCU\四上\安全程式設計\shellcode練習\input.PNG)



在gdb中執行shellcode:

![](C:\Users\rr200\Documents\CCU\四上\安全程式設計\shellcode練習\結果.PNG)



