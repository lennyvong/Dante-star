# Dante-star
Labyrinth's Generator and Solver, language C.

## Description
Dante-star is a labyrinth's generator and solver project made at Epitech technology

## Build

```bash
make (re)
```

## Usage Generator

With dante-star you can choose the size of the labyrinth and if it is perfect or imperfect.

Perfect:
  - There is one and only one exit way to get out of the labyrinth.
  - Every road are accesible.

Imperfect:
  - There can be more than one exit way to get out.
  - There can be road that you cannot access to.

```bash
# To generate a perfect labyrinth
./generator/generator 50 50 perfect

# To generate a impefect labyrinth
./generator/generator 50 50
```
## Usage Solver

You can generate labyrinth but you can solved them to.

Once the labyrinth is solved, it will be display with 'o' to represent the right exit way.

```bash
./solver/solver labyrinth.txt
```
