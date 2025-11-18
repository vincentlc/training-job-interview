# 📘 Exercise: Two Sum

## 📝 Problem Description
Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers that add up to `target`.  
Assume each input has exactly one solution, and you cannot use the same element twice.

**Example:**
- Input: `nums = [2,7,11,15], target = 9` → Output: `[0,1]`
- Input: `nums = [3,2,4], target = 6` → Output: `[1,2]`

---

## 🚀 Solution Approach
- Use a **hash table** to store numbers and their indices
- For each number `n`, check if `target - n` exists in the hash table
- If found, return both indices
- If not found, add current number to hash table
- Time Complexity: O(n), Space Complexity: O(n)

---

## 🧪 How to Run
```bash
cd Two_sums
make
./two_sum
```

Or run with:
```bash
make run
```

---

## 📚 Learning Points
- Practiced **hashmap lookups** for constant-time checks
- Applied **complement search pattern** (finding pairs)
- Used hash tables to optimize from O(n²) to O(n)
