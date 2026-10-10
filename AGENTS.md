# AGENTS.md

Instrucciones para agentes de IA (y personas colaboradoras) que trabajen en este repositorio.
Este archivo es la fuente de verdad; otras herramientas lo importan desde sus propios archivos (ver `CLAUDE.md`).

## Contexto del proyecto

- Repositorio de ejercicios en **C** de la materia Programación Estructurada (UNLu, Centro Regional Chivilcoy, 2025).
- Cada ejercicio vive en su carpeta: `C1/`, `C2/`, `C3/`, con un único archivo `main.c`.
- La consigna del primer parcial está en `Prog. Estructurada - 1er Parcial Modelo.pdf`. Usala como referencia antes de cambiar la lógica de un ejercicio.
- Idioma del proyecto: **español** (nombres de funciones, variables, comentarios, commits y documentación).

## Compilación

- Compilar un ejercicio: `gcc Cn/main.c -o Cn/main` (en Windows, `Cn/main.exe`).
- Los ejecutables compilados están ignorados por git; no los commitees.
- Antes de dar un cambio por terminado, compilá el ejercicio afectado y verificá que no haya warnings nuevos (`gcc -Wall -Wextra`).

## Reglas al modificar código

1. Respetá el estilo existente: indentación con tabulador, llaves en línea propia, nombres en español en minúsculas con guion bajo.
2. Cada ejercicio debe seguir la consigna del PDF. No cambies la firma de funciones que la consigna pide (por ejemplo, parámetros por puntero o retorno por valor) sin que se pida explícitamente.
3. No agregues dependencias externas: el proyecto usa solo la biblioteca estándar de C.
4. No agregues archivos de IDE (`.vscode/`, `.idea/`) ni binarios al repositorio. Ya están en `.gitignore`.
5. Cambios de un solo ejercicio van en un commit propio.

## Commits: Conventional Commits en español

Todos los commits DEBEN seguir este formato:

```
<tipo>(<alcance>): <descripción>

[cuerpo]

[pie]
```

### Tipos permitidos

| Tipo | Descripción |
|------|-------------|
| `feat` | Nueva funcionalidad |
| `fix` | Corrección de errores |
| `docs` | Cambios en documentación |
| `style` | Cambios de formato (no afectan código) |
| `refactor` | Refactorización de código |
| `perf` | Mejoras de rendimiento |
| `test` | Añadir o modificar pruebas |
| `build` | Cambios en sistema de build o dependencias |
| `ci` | Cambios en configuración de CI/CD |
| `chore` | Tareas varias, mantenimiento |
| `revert` | Revertir un commit anterior |

### Reglas

1. **Idioma**: toda la información del commit DEBE estar en español.
2. **Tipo**: uno de los tipos listados arriba, en minúsculas.
3. **Alcance**: opcional; indica el módulo o componente afectado (`C1`, `C2`, `C3`, `readme`, `gitignore`, `agentes`).
4. **Descripción**:
   - Empezar con verbo en presente, tercera persona (añade, corrige, elimina, actualiza).
   - Máximo 50 caracteres.
   - Sin punto final.
5. **Cuerpo**: opcional; explica el qué y el porqué, no el cómo.
6. **Pie**: opcional; para referencias (issues, breaking changes).

### Ejemplos válidos

```
feat(C1): añade validación de longitud de cadena
```

```
fix(C2): corrige índice fuera de rango en la matriz

La última columna se leía una posición más allá de N.
```

```
docs(readme): actualiza instrucciones de compilación
```

### Ejemplos inválidos

```
❌ arreglado bug
❌ Fix: corregido problema
❌ feat: added new feature
❌ actualización
```

## Documentación

- El `README.md` describe el repositorio: estructura, cómo compilar y qué contiene cada ejercicio. Mantenelo sincronizado cuando agregues o renombres un ejercicio.
- Si cambiás reglas de este archivo, actualizá también los archivos que lo importan.

## Flujo de trabajo

- Rama principal: `master`. Remoto: `origin`.
- Antes de commitear, revisá `git status` y `git diff` para no incluir binarios ni archivos de IDE.
- Subí los cambios con `git push origin master` solo cuando la persona lo pida.
