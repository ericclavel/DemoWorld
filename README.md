# DemoWorld — Houdini → Unreal Pipeline

## Structure
- `/Unreal/DemoWorld` — Unreal project (Config, Content, Plugins, Source).
- `/Houdini` — .hip scenes, HDAs, Python tools, TOPs.
- `/Assets` — DCC sources, baked caches, textures, audio.

## Git LFS
Large/binary assets tracked with Git LFS.
Run once after cloning:
    git lfs install

## Notes
- Avoid committing heavy, re-generable caches (keep them in ignored `cache/` dirs).
- Use feature branches and PRs; keep binary churn small and isolated.
