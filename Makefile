.PHONY: clean All

All:
	@echo "----------Building project:[ week-02-01 - Debug ]----------"
	@cd "week-02-01" && "$(MAKE)" -f  "week-02-01.mk"
clean:
	@echo "----------Cleaning project:[ week-02-01 - Debug ]----------"
	@cd "week-02-01" && "$(MAKE)" -f  "week-02-01.mk" clean
