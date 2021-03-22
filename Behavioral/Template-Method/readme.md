咖啡店制作一杯咖啡总体的流程是固定的，只是不同类型的咖啡在煮制和加料上有所不同。

高层类**coffee**控制整体的制作流程；客户代码只依赖**coffee**的抽象；子类只用来实现细节的不同；当子类不被调用时，抽象类也不会被调用。

**coffee**

- chooseBeans()
- boilWater()
- brew()
- addCondiments()
- pourlnCup()

**cappuccino**

- chooseBeans()
- addCondiments()

**flatWhite**

- chooseBeans()
- addCondiments()

