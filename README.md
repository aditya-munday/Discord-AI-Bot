# Simple Discord Bot — DPP (D++) + C++20

A simple Discord bot built with the [D++ (DPP)](https://dpp.dev) library and C++20, using CMake's `FetchContent` for dependency management.

---

## 📋 Features

| Command   | Response                                      |
|-----------|-----------------------------------------------|
| `!hello`  | Greets the user by name: `Hello, username! 👋` |
| `!ping`   | Replies with `🏓 Pong!`                       |
| `!info`   | Sends an embedded info card about the bot     |

---

## 🚀 Getting Started

### 1. Create a Discord Bot Application

1. Go to the [Discord Developer Portal](https://discord.com/developers/applications)
2. Click **New Application** → give it a name
3. Go to **Bot** → click **Add Bot**
4. Under **Token**, click **Reset Token** and **copy** it
5. Under **Privileged Gateway Intents**, enable:
   - ✅ **Message Content Intent**
6. Save changes

### 2. Set Your Bot Token

Open `main.cpp` and replace the placeholder with your actual token:

```cpp
const std::string BOT_TOKEN = "YOUR_BOT_TOKEN_HERE";
```

> ⚠️ **Never share or commit your bot token publicly!**

### 3. Invite the Bot to Your Server

Use this URL (replace `YOUR_CLIENT_ID` with your application's Client ID from the Developer Portal):

```
https://discord.com/api/oauth2/authorize?client_id=YOUR_CLIENT_ID&permissions=2048&scope=bot
```

This grants the bot **Send Messages** permission.

### 4. Build and Run

#### Using CLion
1. Open the project in **CLion**
2. Wait for CMake to configure and fetch DPP automatically
3. Click ▶️ **Run**

#### Using Command Line (Windows)
```bash
cd cmake-build-debug
cmake --build .
.\Project1.exe
```

---

## 🛠️ Project Structure

```
Project1/
├── CMakeLists.txt   # Build configuration (fetches DPP via FetchContent)
├── main.cpp         # Bot source code
└── README.md        # This file
```

---

## 📦 Dependencies

- [D++ (DPP) v10.0.35](https://github.com/brainboxdotcc/DPP) — C++ Discord library
- CMake 3.16+
- C++20 compatible compiler (GCC 10+, MSVC 2019+, Clang 12+)

---

## 📝 License

This project is for educational purposes. DPP is licensed under the Apache 2.0 License.
