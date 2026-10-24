# farm-tickets

Public workspace for Devin Farm sessions.

- `session-kit/`: what a Devin session runs to join the farm tailnet and use the `farm` CLI (`SKILL.md`).
- `tickets/<id>/`: the task (`TICKET.md`), device type (`farm.yaml`) and the camera assertions the verifier checks (`assertions.json`).

Sessions push their work to branches here (`farm/<farm_id>`); the rig fetches the exact commit by SHA, runs it on a real board, and a camera decides whether it worked.
