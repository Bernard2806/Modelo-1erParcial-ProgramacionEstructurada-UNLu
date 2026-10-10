<img align="right" width="150" height="150" src="https://tse1.mm.bing.net/th/id/OIP.PeD3I26BP5f09Ow1OSPLyAAAAA?rs=1&pid=ImgDetMain&o=7&rm=3">

### Repositorio de Ejercicios - Segundo Cuatrimestre UNLu
###### UNLu - Centro Regional Chivilcoy
###### Programación Estructurada - 2025
###### Profesores: Adriana Nanini y Costanza Campagnon

---

## Descripción

Ejercicios resueltos en lenguaje C correspondientes a la materia Programación Estructurada. Cada ejercicio está en su propia carpeta y contiene un único archivo fuente.

## Estructura

```
.
├── C1/main.c                                   # Largo de una cadena
├── C2/main.c                                   # Carga de matriz cuadrada y restas por columna
├── C3/main.c                                   # Caracteres iguales consecutivos al inicio de dos palabras
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

Reemplazá `C1` por `C2` o `C3` para compilar otro ejercicio.

Los ejecutables generados están excluidos por `.gitignore`.

## Contribuir

Los commits siguen [Conventional Commits](https://www.conventionalcommits.org/) en español. El formato, los tipos permitidos y las demás reglas están en [`AGENTS.md`](AGENTS.md).
