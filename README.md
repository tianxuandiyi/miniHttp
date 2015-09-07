# miniHttp
本软件主要实现了简单的http服务器相关的代码主要包含两个方面，

1.主程序模块：建立TCP类型的socket在80 端口进行监听请求，接受到了监听请求之后，将链接请求传送给处理模块，并继续进行监听：

流程框图如下所示
   
   
   main主程序      -----（环境设置 、建立侦听socket以及客户链接处理调用主循环）
        |
        |
    客户链接处理
        |                                 发送GIF文件
        |                               
        |                                 发送JPG文件
      解析客户请求HTTP协议头---------->
                                        发送文本文件------------------------->发送HTTP协议数据头
                                          
                                         发送HTML文件
                                         
                                         
                                         发送当前目录文件
                                          
                                          
                                          
                                          
                                          
                                          

2. 链接处理模块：
流程图如下所示：
                 客户端请求获取服务器资源--------------------->侦听客户请求
                            |                                        |
                            |                                        |
                            |                                        |
                            |                                        |
                        客户计算机<------------发送http协议头<----解析客户请求字符串
                                |                                       |
                                |                                       |
                                | ------------------                -   |  
                                                  |                     |
                                                  |                     |
                                              发送资源数据       读取客户请求资源
                        
                        
                        
                        
                        
                  


