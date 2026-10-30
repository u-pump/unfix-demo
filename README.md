# Unfix demo

`u-pump/unfix-demo` is a small C++ project with a reproducible memory bug. It shows how Unfix evaluates two proposed changes:

- [PR #1 — VERIFIED](../../pull/1) fixes the bug while keeping the checks intact.
- [PR #2 — REJECTED](../../pull/2) masks the failure by disabling a check.

[Unfix](https://unfix.dev) is a proprietary C/C++ verification product. This repository contains the demo project and example patches. The Unfix verifier's source code is not included here.

Verification runs only when the repository owner applies the `verify-fix` label to a pull request from this repository. Fork pull requests cannot run the private verifier workflow.
