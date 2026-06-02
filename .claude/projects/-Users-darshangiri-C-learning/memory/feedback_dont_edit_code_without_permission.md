---
name: feedback_dont_edit_code_without_permission
description: Do not modify the user's code unless explicitly asked to do so
metadata:
  type: feedback
---

Do not edit the user's code files unless they explicitly ask for code changes.

**Why:** User asked only to fix IntelliSense/squiggles (a config issue), but Claude also modified their .cpp file — this was unwanted and frustrating.

**How to apply:** When the task is about tooling, config, or IDE setup, touch only config files. Keep code files untouched unless the user specifically asks for code edits.
