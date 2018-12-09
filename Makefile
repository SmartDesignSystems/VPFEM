LIB_VPFEM = Vpfem/
APP = Sandbox/
MY_TARGETS = $(LIB_VPFEM) $(APP)

.PHONY: all
all: $(MY_TARGETS)

.PHONY: $(APP)
$(APP):
	@$(MAKE) -C $@;

.PHONY: $(LIB_VPFEM)
$(LIB_VPFEM):
	@$(MAKE) -C $@;

.PHONY: clean
clean:
	@$(MAKE) -C $(APP) clean;
	@$(MAKE) -C $(LIB_VPFEM) clean;
	