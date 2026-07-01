# TROLL lint tests

For developpers.

## Requirements

Required:
- [`cpplint`](https://github.com/cpplint/cpplint) for C++ formatting 
  - Ubuntu: `sudo apt install cpplint`
  - macos: `brew install cpplint`
- [`cppcheck`](http://cppcheck.net/) for static code analysis
  - Ubuntu: `sudo apt install cppcheck`
  - macos: `brew install cppcheck`

## Run

Run tests from `./lint/` folder:

```bash
cmake .
make lint-style # cpplint only
make lint-static # cppcheck only
make lint # both cpplint & cppcheck
```

## Workflow 

`lint` workflow defined in `.github/workflows/lint.yml`