PIXEL-ART-EDITOR


A. Introduction
A simple **Pixel Art Editor** developed using the **C programming language**. The application provides a lightweight, terminal-based environment for creating and manipulating pixel art through a command-line interface. Key contributions include an efficient flood-fill algorithm implementation using four-way recursion, dynamic memory management for canvas resizing, and a user-friendly menu-driven interface. 

B.Features
- Create a customizable canvas **(up to 50 × 80)**.
- Draw pixels using any character.
- Erase individual pixels.
- Fill a connected area using a recursive flood-fill algorithm.
- Clear the entire canvas.
- Resize the canvas dynamically.
- Clean memory allocation and deallocation.

C. Concepts
- Dynamic memory allocation **(`malloc`, `free`)**.
- Double pointers **(`char **`)**.
- 2D arrays.
- Recursion **(flood fill)**.
- Input validation.
- Menu-driven user interface.
- Modular programming using functions.

 D. Working Procedure
- The canvas is stored as a **2D dynamic array of characters**.
- Each cell initially contains `.` (dot).
- Users interact through a menu.
- Flood fill replaces all connected characters starting from a selected point.
- Canvas resizing safely frees old memory and allocates new space.

E. User Menu Demo
| Option | Description                       |
| ------ | --------------------------------- |
| 1      | Draw a pixel at given coordinates |
| 2      | Erase a pixel                     |
| 3      | Fill an area (Flood Fill)         |
| 4      | Clear the entire canvas           |
| 5      | Resize the canvas                 |
| 6      | Exit the program                  |


F. Coordinate System in the Canvas:
- Rows → Height **(X-axis)**.
- Columns → Width **(Y-axis)**.
- Top-left corner starts at **(0, 0)**.

G. Limitations
- Uses **system("cls")** (Works with Windows-only).
- Flood fill uses recursion (Very large fills may cause stack overflow).
- No color support (character-based only).

H. Future Improvements
- Cross-platform screen clearing.
- Iterative flood fill using stack/queue.
- Save & load canvas from file.
- Color support using ANSI escape codes.
- Mouse-based input (advanced pixel editing).


