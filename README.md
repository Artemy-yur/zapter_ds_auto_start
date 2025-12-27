# Zapret DS Auto Start / Автозапуск Zapret DS

## 🇷🇺 Русская версия

### 📋 Описание
Проект для автоматического запуска Zapret Discord/YouTube с выбранным ALT при старте Windows.

### ⚙️ Требования
- Windows 7/8/10/11
- Zapret Discord/YouTube версии 1.9.1 (или аналогичная структура)
- Файлы Zapret расположены на рабочем столе в папке:  
  `C:\Users\Desktop\zapret-discord-youtube-1.9.1 \`

### 🚀 Быстрая установка

#### 1. Создание конфигурационного файла
Создайте файл `config.txt` в папке Zapret со следующим содержимым:
```
0
```
Где `0` - номер ALT (от 0 до 11)

#### 2. Добавление в автозагрузку
1. Нажмите `Win + R`
2. Введите: `shell:startup`
3. Нажмите Enter
4. Скопируйте `zapret_loader.exe` в открывшуюся папку

### ⚡ Использование
| Значение в config.txt | Результат |
|----------------------|-----------|
| 0 | Запустится `general (ALT).bat` |
| 1-11 | Запустится `general (ALT1).bat` - `general (ALT11).bat` |

### 🛠️ Устранение неполадок
- **Не запускается**: Проверьте путь к папке Zapret и существование `config.txt`
- **Неправильный ALT**: Убедитесь, что в `config.txt` одно число от 0 до 11
- **Окно CMD видно**: Это нормальное поведение программы

---

## 🇺🇸 English Version

### 📋 Description
Project for automatic launch of Zapret Discord/YouTube with selected ALT on Windows startup.

### ⚙️ Requirements
- Windows 7/8/10/11
- Zapret Discord/YouTube version 1.9.1 (or similar structure)
- Zapret files located on desktop in folder:  
  `C:\Users\Desktop\zapret-discord-youtube-1.9.1\`

### 🚀 Quick Setup

#### 1. Create Configuration File
Create `config.txt` file in Zapret folder with content:
```
0
```
Where `0` is ALT number (from 0 to 11)

#### 2. Add to Startup
1. Press `Win + R`
2. Type: `shell:startup`
3. Press Enter
4. Copy `zapret_loader.exe` to the opened folder

### ⚡ Usage
| Value in config.txt | Result |
|---------------------|--------|
| 0 | Launches `general (ALT).bat` |
| 1-11 | Launches `general (ALT1).bat` - `general (ALT11).bat` |

### 🛠️ Troubleshooting
- **Not starting**: Check Zapret folder path and `config.txt` existence
- **Wrong ALT**: Ensure `config.txt` contains single number from 0 to 11
- **CMD window visible**: This is normal program behavior

## 📁 Project Structure
```
zapret_loader.exe          # Main executable
zapret_loader.c            # Source code (C)
README.md                  # This documentation
```

## 🔄 Configuration
Edit `config.txt` to change ALT number, then reboot or manually run `zapret_loader.exe`.

## 🗑️ Uninstallation
1. Remove `zapret_loader.exe` from startup folder
2. Delete `config.txt` from Zapret folder (optional)
3. Reboot computer

---
*Last updated: 2025*  
*Compatible with all Windows versions*
