# DemoWorld Pipeline Notes

## Source of truth
- Unreal project lives at `/Unreal/DemoWorld`.
- Houdini scenes live at `/Houdini/hip`; tools/HDAs at `/Houdini/hda`.

## Git/LFS
- Binary types are tracked in `.gitattributes` (LFS + lockable).
- Pre-commit hook blocks >100MB non-LFS files.
- Avoid committing re-generable caches (DDC, PDG, temp, sim caches).

## Houdini → Unreal
- Prefer USD/FBX export paths under `/Assets/source`.
- Bake caches (.bgeo.sc, .vdb) outside Git or under ignored `cache/` dirs.
- Name exports with clear prefixes (sm_, tx_, hda_, etc.).

## Open todos
- [ ] Add a minimal example HDA and roundtrip test
- [ ] Decide on export formats (USD vs FBX) per asset type
- [ ] Add a README section for per-machine setup (Houdini/UE versions)
