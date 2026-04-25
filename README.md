# Raylib-CPP Starter Template for VS Code

![Language](https://img.shields.io/badge/language-C%2B%2B-brightgreen)
![Raylib](https://img.shields.io/badge/raylib-6.0-00d4aa)
![Platform](https://img.shields.io/badge/platform-Windows%2010%20%7C%2011-blue)
![Editor](https://img.shields.io/badge/editor-VS%20Code-007ACC)

A minimal C++ project scaffold for Visual Studio Code on Windows — includes a bouncing ball demo and zero boilerplate friction.

<p align="center">
  <img src="preview.jpg" alt="Preview of the bouncing ball demo" width="800">
</p>

---

## Get started in 3 steps

**1.** Double-click `main.code-workspace` to open the project in VS Code.

**2.** In the Explorer panel, navigate to the `src/` folder and open `main.cpp`.

**3.** Press `F5` to compile and run.

---

## What's inside

| | Feature | Details |
|---|---|---|
| 📁 | **Clean folder structure** | All source code lives in `src/` for clear organisation |
| 🎱 | **Bouncing ball demo** | Ready-to-run example using raylib's core 2D drawing API |
| ⚙️ | **VS Code tasks** | Pre-configured build tasks — no manual setup required |
| ✅ | **Tested on Win 10/11** | Works with raylib 6.0 on both platforms out of the box |

---

## Quick look

```cpp
#include <raylib.h>
#include "ball.h"

int main()
{
    const Color darkGreen = {20, 160, 133, 255};

    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;

    Ball ball;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        ball.Update();

        BeginDrawing();
            ClearBackground(darkGreen);
            ball.Draw();
        EndDrawing();
    }

    CloseWindow();
}
```

---

## What's changed

The template now uses folders for better organisation. All source code lives in the `src/` folder.

---

## Resources

🎥 [Video Tutorial on YouTube](https://www.youtube.com/watch?v=PaAcVk5jUd8)
&nbsp;&nbsp;|&nbsp;&nbsp;
📺 [My YouTube Channel](https://www.youtube.com/channel/UC3ivOTE5EgpmF2DHLBmWIWg)
