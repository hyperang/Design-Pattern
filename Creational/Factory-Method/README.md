**Product**

所有的产品必须实现这个共同的接口。使用这些产品的类可以引用这个接口而不是具体类。

**Concrete Product**

**Concrete Creator**

- factoryMethod()

Concrete Creator负责创建一个或者多个具体产品，只有Concrete Creator类知道如何创建这些产品。factoryMethod()方法实际造出产品。

**Creator**

- factoryMethod()
- anOperation()