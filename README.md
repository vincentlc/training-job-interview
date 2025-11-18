# 🛠️ Tech Interview Practice

This repository contains my **coding exercises and algorithm solutions** in **Python** and **C**, created as part of a structured self-training program to prepare for technical interviews.

It includes solutions to classic algorithm problems, test-driven development (TDD) examples, and exercises covering core data structures and patterns used in technical interviews.

The goal is to **demonstrate coding fluency, problem-solving skills, and professional development practices**.

---

## 📂 Repository Structure

```
Training_job_interview/
│
├─ Python/
│  ├─ 00_first_assessment/    # Initial assessment and baseline exercises
│  ├─ 01_dict_set/            # Exercises with dictionaries, sets, and duplicates
│  │  ├─ contain_duplicate/
│  │  └─ two_sum/
│  ├─ 02_zip_map/             # Exercises with zip, map, and string operations
│  │  ├─ domino/
│  │  ├─ first_uniq_char/
│  │  ├─ intersection_two_array/
│  │  └─ two_anagram/
│  └─ [More to come...]
│
├─ C/
│  ├─ Two_sums/               # Two-sum problem implementation
│  ├─ Count_String/           # String counting operations
│  ├─ Number_of_bits1/        # Bit manipulation exercises
│  ├─ Password_Attempts/      # Logic and control flow
│  ├─ Reverse_string/         # String reversal
│  ├─ SubArray/               # Subarray algorithms
│  └─ [More to come...]
│
├─ C++/                        # Coming soon...
│
└─ README.md                   # Main repository documentation
```

---

## 🚀 How to Run

### Python

Install dependencies (if needed):
```bash
pip install pytest
```

Run tests for a given exercise:
```bash
cd Python/01_dict_set/two_sum
pytest test_two_sum.py
```

Or run a single file:
```bash
python Python/01_dict_set/two_sum/two_sum.py
```

### C

Navigate to the problem directory and run:
```bash
cd C/Two_sums
./run.sh
```

Or build and run manually:
```bash
cd C/Two_sums
make
./two_sum
```

Each C project includes a `Makefile`, `run.sh` script, and a test suite in the `test/` directory.

---

## 📚 Problems & Topics

### Python
- **01_dict_set**: Hash maps, sets, duplicate detection, two-pointer approaches
- **02_zip_map**: String operations, character frequencies, array operations

### C
- **Two_sums**: Hash-based approach to finding pairs
- **String Operations**: Character counting, string reversal
- **Bit Manipulation**: Bit counting and operations
- **Array Algorithms**: Subarray problems, dynamic programming foundations

---

## 🎯 Goals

- ✅ Practice **algorithm problem-solving** in multiple languages
- ✅ Develop **clean, tested code** with TDD principles
- ✅ Build **reusable problem patterns** for technical interviews
- ✅ Demonstrate **professional coding practices** and documentation
- 🔜 Expand to more languages and advanced topics (C++ coming soon)

---

## 📝 Adding New Problems

To maintain consistency, follow this structure for new problems:

**Python:**
```
Python/NN_topic/problem_name/
├─ problem_name.py       # Solution
├─ test_problem_name.py  # Tests (pytest)
└─ README.md            # Problem description
```

**C:**
```
C/Problem_Name/
├─ src/
│  ├─ problem.c
│  └─ problem.h
├─ test/
│  └─ main.c
├─ Makefile
├─ run.sh
└─ README.md
```


