# C programming
## Begining exercises
Solved exercises from C programming wiki book
### String manipulation
### Loops
- Run `make loops` which produces the `./bin/loops` binary
  ```
  ➜  begining-exercises make loops
  mkdir -p ./bin
  gcc ./source/loops.c -Wall -o ./bin/loops
  ➜  begining-exercises tree .
  .
  ├── Makefile
  ├── README.md
  ├── bin
  │   └── loops
  └── source
      └── loops.c

      2 directories, 4 files
  ```
- `clean` target is available to clean the files generated by above command
  ```
  ➜  begining-exercises make clean
  rm -r ./bin/
  ```
