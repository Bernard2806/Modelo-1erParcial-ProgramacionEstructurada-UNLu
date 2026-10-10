# Modelo de examen - Primer Parcial

Modelo de examen del primer parcial de **Programación I - Programación Estructurada (11074 - 11274)**, UNLu.

Cada consigna del parcial tiene su propia carpeta con un único archivo fuente en C. La consigna completa está en `Prog. Estructurada - 1er Parcial Modelo.pdf`.

## Estructura

```
.
├── C1/main.c                                   # Consigna 1: largo de una cadena mediante punteros
├── C2/main.c                                   # Consigna 2: matriz cuadrada, carga y resta por columna
├── C3/main.c                                   # Consigna 3: caracteres iguales consecutivos al inicio de dos palabras
├── Prog. Estructurada - 1er Parcial Modelo.pdf # Consigna del primer parcial
├── AGENTS.md                                   # Reglas para agentes de IA y colaboradores
└── CLAUDE.md                                   # Importa AGENTS.md para Claude Code
```

## Requisitos

- Compilador de C compatible con C99 (por ejemplo, GCC o MinGW en Windows).

## Compilación y ejecución

Desde la raíz del repositorio:

```bash
# Linux / macOS
gcc C1/main.c -o C1/main && ./C1/main

# Windows (PowerShell o CMD con MinGW)
gcc C1/main.c -o C1/main.exe
.\C1/main.exe
```

Reemplazá `C1` por `C2` o `C3` para compilar otra consigna.

Los ejecutables generados están excluidos por `.gitignore`.
