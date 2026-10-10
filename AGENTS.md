# Reglas Agenticas

## Conventional Commits en Español

Todos los commits en este repositorio DEBEN seguir el formato de Conventional Commens adaptado al español.

### Formato

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

1. **Idioma**: Toda la información del commit DEBE estar en español
2. **Tipo**: Usar uno de los tipos listados arriba en minúsculas
3. **Alcance**: Opcional, indica el módulo o componente afectado
4. **Descripción**: 
   - Iniciar con verbo en infinitivo (añade, corrige, elimina, actualiza)
   - Máximo 50 caracteres
   - Sin punto final
5. **Cuerpo**: Opcional, explica el qué y el porqué (no el cómo)
6. **Pie**: Opcional, para referencias (issues, breaking changes)

### Ejemplos válidos

```
feat(auth): añade validación de formularios
```

```
fix(api): corrige error en endpoint de usuarios

El endpoint devolvía 500 cuando el usuario no existía.
Ahora devuelve 404 correctamente.
```

```
docs(readme): actualiza instrucciones de instalación
```

```
refactor(db): simplifica consultas de base de datos
```

### Ejemplos inválidos

```
❌ arreglado bug
❌ Fix: corregido problema
❌ feat: added new feature
❌ actualización
```
