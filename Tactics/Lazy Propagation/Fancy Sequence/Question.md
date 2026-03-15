# Fancy Sequence API (C++)

Implement an API that generates fancy sequences using the `append`, `addAll`, and `multAll` operations.

## Class Definition

Implement the `Fancy` class:

```cpp
class Fancy {
public:
    Fancy() {
        // Initializes the object with an empty sequence
    }

    void append(int val) {
        // Appends an integer val to the end of the sequence
    }

    void addAll(int inc) {
        // Increments all existing values in the sequence by inc
    }

    void multAll(int m) {
        // Multiplies all existing values in the sequence by m
    }

    int getIndex(int idx) {
        // Returns the current value at index idx modulo 10^9 + 7
        // Returns -1 if idx >= sequence length
    }
};
```

---

## Example

**Input**

```text
["Fancy", "append", "addAll", "append", "multAll", "getIndex", "addAll", "append", "multAll", "getIndex", "getIndex", "getIndex"]
[[], [2], [3], [7], [2], [0], [3], [10], [2], [0], [1], [2]]
```

**Output**

```text
[null, null, null, null, null, 10, null, null, null, 26, 34, 20]
```

**Explanation**

```cpp
Fancy fancy;
fancy.append(2);   // sequence: [2]
fancy.addAll(3);   // sequence: [5]
fancy.append(7);   // sequence: [5, 7]
fancy.multAll(2);  // sequence: [10, 14]
fancy.getIndex(0); // returns 10
fancy.addAll(3);   // sequence: [13, 17]
fancy.append(10);  // sequence: [13, 17, 10]
fancy.multAll(2);  // sequence: [26, 34, 20]
fancy.getIndex(0); // returns 26
fancy.getIndex(1); // returns 34
fancy.getIndex(2); // returns 20
```

---

## Constraints

* `1 <= val, inc, m <= 100`
* `0 <= idx <= 10^5`
* At most `10^5` calls total will be made to `append`, `addAll`, `multAll`, and `getIndex`.

---
