比赛赛况播报员会在比赛比分改变或者比赛结束时更新比赛数据，观看比赛的人会收到更新；比赛赛况播报员并不关心看球赛的具体人数。

观察者模式需要定义：

**Subject**

Subject类的实例需要完成观察者的管理工作（注册、删除）并通知观察者。

- registerObserver()
- removeObserver()
- notifyObserver()

被观察者的抽象继承自Subject类。在不同的被观察者的抽象中定义被观察者的行为。Subject实例拥有一个存放指向Observers指针的容器，内容更改时容器中所有指针指向的Observer实例都执行update操作。

**Observer**

Observer类是观察者的抽象，为所有具体观察者定义得到通知时更新的接口。

- update()

Observer类的实现需要一个指向Subject实例的指针来确定观察的对象。同时也需要这个指针来调用Subject实例对自己进行相关的操作（注册、删除）。